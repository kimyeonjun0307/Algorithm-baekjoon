namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());
            int B = int.Parse(Console.ReadLine());
            int E = 0;
            int F = 0;

            for (int i= B ; i > 0; i--) 
            {
                string[] input = Console.ReadLine().Split(' ');
                int C = int.Parse(input[0]);
                int D = int.Parse(input[1]);
                E = C * D;
                F = F + E;
            }
            if (F == A)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }
            }
    }
}
