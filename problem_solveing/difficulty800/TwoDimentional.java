public class TwoDimentional{
    public static void main(String[] args) {
        int [][] a = {{35,25,17},{55,13,42}};
        int [][] b = {{5,252,12},{12,13,52}};
        int [][] sum = new int[2][3];
        int rows,colum;

        for(rows =0; rows <a.length; rows++){
            for(colum =0; colum<a[0].length; colum++){
                sum[rows][colum] = a[rows][colum] + b[rows][colum];
            }
        }
        System.out.println("Sum of those Array are: ");
        for(rows =0; rows<a.length; rows++){
            for(colum = 0; colum<a[0].length; colum++){
                System.out.format("%d\t",sum[rows][colum]);
            }
            System.err.println(" ");
        }
    }
}