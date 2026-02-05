namespace baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input1 = Console.ReadLine();
            string input2 = Console.ReadLine();
            int A = int.Parse(input1) * (input2[2]-'0');
            int B = int.Parse(input1) * (input2[1] - '0');
            int C = int.Parse(input1) * (input2[0] - '0');

            Console.WriteLine(A);
            Console.WriteLine(B);
            Console.WriteLine(C);
            Console.WriteLine(A+(B*10)+(C*100));

        }
    }
}