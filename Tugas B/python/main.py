from hardware import hardware

# menggunakan construct
data = hardware("SATA","S221");

# menggunakan setter
data.setprice("100 USD");
data.setid("XIX");
data.setfreq("114 Ghz");
data.setsize("512 Gb");
data.setcuda("XYZ");

#Output
data.printhardware();
data.printproduct();
data.printmemory();