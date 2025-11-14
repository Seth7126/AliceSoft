// 函数: sub_10004910
// 地址: 0x10004910
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

arg1[3].b = 0

if (arg2 != 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
else
    void* eax_1 = __getptd()
    arg1[2] = eax_1
    *arg1 = *(eax_1 + 0x6c)
    arg1[1] = *(eax_1 + 0x68)
    
    if (*arg1 != data_10020538 && (*(eax_1 + 0x70) & data_10020d10) == 0)
        *arg1 = sub_10007719()
    
    if (arg1[1] != data_10020970 && (*(arg1[2] + 0x70) & data_10020d10) == 0)
        arg1[1] = sub_100079b5()
    
    void* eax_6 = arg1[2]
    
    if ((*(eax_6 + 0x70) & 2) == 0)
        *(eax_6 + 0x70) |= 2
        arg1[3].b = 1

return arg1
