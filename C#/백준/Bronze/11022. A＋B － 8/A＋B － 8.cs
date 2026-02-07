using System.Text;
namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            
            for (int i = 0; A > i; i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                int B = int.Parse(input[0]);
                int C = int.Parse(input[1]);
                sb.AppendLine($"Case #{i+1}: "+B+" + "+C+" = "+(B + C).ToString());
            }

            Console.Write(sb);
        }
    }
}
