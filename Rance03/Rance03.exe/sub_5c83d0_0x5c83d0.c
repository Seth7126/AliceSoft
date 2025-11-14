// 函数: sub_5c83d0
// 地址: 0x5c83d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* eax = arg1[0x82]
int32_t ebp = *eax
arg1[0x82] = &eax[1]
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_6 = (arg1[0x5e] - arg1[0x5d]) s>> 2
int32_t edx

if (ecx u< eax_6)
    eax_6 = arg1[0x5d]
    ecx = *(eax_6 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_8 = ecx[3] u>> 2
        
        if (ebx u>= eax_8)
            return sub_5c24e0(eax_8, edx, ecx, arg1, 0x6e8100)
        
        int32_t eax_9
        
        if (ecx[3] != 0)
            eax_9 = ecx[2]
        else
            eax_9 = 0
        
        struct sys43vm::CPage::VTable** eax_10
        int32_t* ecx_2
        int32_t edx_1
        eax_10, ecx_2, edx_1 = sub_5d6d70(&arg1[0x5b], *(eax_9 + (ebx << 2)), ebp, &var_4)
        
        if (eax_10.b != 0)
            return sub_5ddf10(&arg1[0x88], var_4)
        
        return sub_5c24e0(eax_10, edx_1, ecx_2, arg1, 0x6e80cc)

return sub_5c24e0(eax_6, edx, ecx, arg1, 0x6e8068)
