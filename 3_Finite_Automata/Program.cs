using System.Data;
using System.IO;


class program
{
    static void Main()
    {
        try
        {
            /*StreamReader sr = new StreamReader("FA.in");

            var line = sr.ReadLine();
            DataTable matrix = new DataTable();

            String[] placeholder = line.Split(" ");
            int NoCols = placeholder.Length;
            foreach(string elem in placeholder)
                matrix.Columns.Add(elem, typeof(string));

            line = sr.ReadLine();
            while (line != null)
            {
                placeholder = line.Split(" ");
                DataRow row = matrix.NewRow();
                foreach (String s in placeholder )
                    foreach (String colName in matrix.Rows)
                        row.SetField(colName, s);
                line = sr.ReadLine();
            }*/

            DataTable matrix = new DataTable();

            var fileContents = File.ReadAllLines("FA.in");

            var splitFileContents = (from f in fileContents select f.Split(' ')).ToArray();

            int maxLength = (from s in splitFileContents select s.Count()).Max();

            for (int i = 0; i < maxLength; i++)
                matrix.Columns.Add();
            
            foreach (var line in splitFileContents)
            {
                DataRow row = matrix.NewRow();
                row.ItemArray = (String[])line;
                matrix.Rows.Add(row);
            }


            // Q : set of all states
            String str = "Q = {";
            foreach(DataRow row in matrix.Rows) {
                if (row.Field<String>("Column1") != "state/charact")
                    str += row.Field<String>("Column1") + ", ";
            }
            str += "}\n";


            // Σ : set of input characters
            str += "Σ = {";
            for (int i = 1; i < maxLength; i++)
                str += matrix.Rows[0][i].ToString() + ", ";
            
            str += "}\n";


            // F : set of final states
            str += "F = {" + matrix.Rows[(matrix.Rows.Count - 1)][0].ToString() + "}\n";


            // Transition Function, defined as δ : Q X Σ --> Q.
            foreach (DataRow row in matrix.Rows) 
                if (row.Field<String>("Column1") != "state/charact")
                for (int i = 1; i < maxLength; i++)
                    {
                        String col = "Column" + (i + 1);
                        if (row.Field<String>(col).ToString() != "0")
                        {

                            str += "δ : " + row.Field<String>("Column1").ToString() + " X "
                                + matrix.Rows[0][i].ToString() + " --> "
                                + row.Field<String>(i).ToString()
                                + "\n";

                        }
                    }
                        


            Console.WriteLine(str);
        }
        catch (Exception e)
        {
            Console.WriteLine("Exception: " + e.Message);
        }
    }
}