// 函数: sub_420c80
// 地址: 0x420c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]
int32_t ebp = *arg1
int32_t ecx_2 = (eax - ebp) s>> 2

if (ecx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - ecx_2) << 2)
    arg1[1] = eax_1
    return eax_1

if (ecx_2 u< arg2)
    int32_t* ebx_1 = arg3
    
    if (ebx_1 u>= eax || ebp u> ebx_1)
        sub_415950(arg1, arg2 - ecx_2)
    else
        sub_415950(arg1, arg2 - ecx_2)
        ebx_1 = *arg1 + ((ebx_1 - ebp) s>> 2 << 2)
    
    void* edx_1 = arg1[1]
    int32_t eax_9 = (edx_1 - *arg1) s>> 2
    int32_t i_1 = arg2 - eax_9
    
    if (arg2 != eax_9)
        int32_t i
        
        do
            edx_1 += 4
            *(edx_1 - 4) = *ebx_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t ecx_6 = arg1[1]
    eax = ecx_6 + ((arg2 - ((ecx_6 - *arg1) s>> 2)) << 2)
    arg1[1] = eax

return eax
