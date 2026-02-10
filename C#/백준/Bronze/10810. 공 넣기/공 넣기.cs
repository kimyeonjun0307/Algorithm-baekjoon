using System.Text;
namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();

            string[] firstline = Console.ReadLine().Split(' ');
            int resultlength = int.Parse(firstline[0]);
            int numbers = int.Parse(firstline[1]);
            int[] basket = new int[resultlength];
            for (int i = 0; i < numbers; i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                int A = int.Parse(input[0]);
                int B = int.Parse(input[1]);
                int C = int.Parse(input[2]);
                for (int j = A-1; j < B; j++)
                {
                    basket[j] = C;
                }
                
            }
            for (int k = 0; k < resultlength; k++)
            {
                sb.Append(basket[k] + " ");
            }
            Console.WriteLine(sb);
        }
    }
}


