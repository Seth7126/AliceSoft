// 函数: sub_635d80
// 地址: 0x635d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = data_75d544
int32_t eax
int32_t ecx_1

if (arg5 == 0)
    if (arg4 == 0)
        if (ecx != 0)
            ecx_1 = (*(*ecx + 0xc))(arg2, arg3, 0x20)
            
            if (ecx_1 != 0)
            label_635de2:
                *(arg1 + 0x14) = ecx_1
                void* eax_4
                eax_4.b = 1
                return eax_4
    else if (ecx != 0)
        eax = (*(*ecx + 8))(arg2, arg3, 0x20)
        goto label_635d9e
else if (ecx != 0)
    eax = (*(*ecx + 0x10))(arg2, arg3)
label_635d9e:
    ecx_1 = eax
    
    if (ecx_1 != 0)
        goto label_635de2
eax.b = 0
return eax
