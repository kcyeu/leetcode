#/bin/sh

awk '
{
    for (i=1; i<=NF; i++) {
        a[NR,i] = $i
    }
}
NF>p {p = NF}
END {
    for (i=1; i<=p; i++) {
        output=a[1,i]
        for (j=2; j<=NR; j++) {
            output=output" "a[j,i]
        }
        print output
    }
}' 194-file.txt
