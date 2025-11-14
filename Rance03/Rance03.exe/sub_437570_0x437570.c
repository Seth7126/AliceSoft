// 函数: sub_437570
// 地址: 0x437570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = (*(arg1 + 0x70) - *(arg1 + 0x6c)) s>> 2

if (result s> arg3)
    int32_t esi_1 = *(arg1 + 0x6c)
    
    if ((*(arg1 + 0x70) - esi_1) s>> 2 u<= arg3)
        sub_69a57f("invalid vector<T> subscript")
        noreturn
    
    void* ecx = *(esi_1 + (arg3 << 2))
    result = *(ecx + 4)
    
    if (result != 0)
        return sub_4355f0(result, arg2)
    
    void* ecx_2 = *(ecx + 8)
    
    if (ecx_2 != 0)
        return sub_4386c0(ecx_2, arg2)

return result
