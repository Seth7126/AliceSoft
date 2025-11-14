// 函数: sub_6709c0
// 地址: 0x6709c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int64_t* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_670a50(arg1)
    
    int64_t* ecx_5 = arg1[1]
    
    if (ecx_5 != 0)
        *ecx_5 = *arg2
        ecx_5[1].d = arg2[1].d
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_670a50(arg1)
    
    eax = *arg1 + (arg2 - eax) s/ 0xc * 0xc
    int64_t* ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        *ecx_3 = *eax
        ecx_3[1].d = eax[1].d
        arg1[1] += 0xc
        return 

arg1[1] += 0xc
