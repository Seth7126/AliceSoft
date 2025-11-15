// 函数: sub_4238d0
// 地址: 0x4238d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = data_7fcb3c

if ((*(edx + 0x4c) - *(edx + 0x48)) s>> 2 s> arg1)
    int32_t esi_1 = *(edx + 0x48)
    
    if ((*(edx + 0x4c) - esi_1) s>> 2 u<= arg1)
        sub_6d0947("invalid vector<T> subscript")
        noreturn
    
    int32_t* ecx = *(*(esi_1 + (arg1 << 2)) + 4)
    
    if (ecx != 0)
        jump(*(*ecx + 8))

return 0
