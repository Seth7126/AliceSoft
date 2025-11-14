// 函数: sub_5cb290
// 地址: 0x5cb290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t edx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_5 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_5)
    eax_5 = arg1[0x5d]
    ecx = *(eax_5 + (ecx << 2))
    
    if (ecx != 0)
        int32_t eax_6
        int32_t ecx_1
        int32_t edx_1
        eax_6, ecx_1, edx_1 = sub_5d4150(ecx, ebx, edx)
        
        if (eax_6.b != 0)
            return sub_5ddf10(&arg1[0x88], ebx)
        
        char const* const var_10_1 = "copyString"
        return sub_5c2400(eax_6, edx_1, ecx_1, arg1, "C_ASSIGN")

return sub_5c24e0(eax_5, edx, ecx, arg1, 0x6e8cdc)
