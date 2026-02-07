using System.Text;
namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A, B;
            StringBuilder sb = new StringBuilder();
            do
            {
                string[] input = Console.ReadLine().Split(' ');
                A = int.Parse(input[0]);
                B = int.Parse(input[1]);

                if (A != 0 || B != 0)
                {
                    sb.AppendLine((A + B).ToString());
                }

            } while (!(A == 0 && B == 0));
            Console.WriteLine(sb);
        }
    }
}


