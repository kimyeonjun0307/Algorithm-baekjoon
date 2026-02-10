using System.Text;
namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            long factorial = 1;
            for (int i = 1; i <= N; i++)
            {
                factorial = i*factorial;
            }
            Console.WriteLine(factorial);
        }
    }
}





