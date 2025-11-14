// 函数: sub_52ec50
// 地址: 0x52ec50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0xc)

if (i == *(arg1 + 0x10))
    return 

int32_t* ebx_1 = &i[1]

do
    int32_t* ecx = *i
    
    if (((ecx[8] - ecx[7]) & 0xfffffffc) s> 4)
        sub_52e260(ecx)
        i = &i[1]
        ebx_1 = &ebx_1[1]
    else
        if (ecx != 0)
            (**ecx)(1)
        
        _memcpy(i, ebx_1, (*(arg1 + 0x10) - ebx_1) & 0xfffffffc)
        *(arg1 + 0x10) -= 4
while (i != *(arg1 + 0x10))
