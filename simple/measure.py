import subprocess



for i in range(0, 101):
    size = 300 * i
    size_str = str(size)
    subprocess.run(["../build/gmm/enzyme/gmm_enzyme", size_str, size_str, "2", "0"])
