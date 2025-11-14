// 函数: sub_6817b0
// 地址: 0x6817b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 0x58)

if (eax == 0 && *(arg1 + 0xe0) != eax)
    void* eax_2 = *(*(arg1 + 0xdc) + 0x60)
    
    if (eax_2 != 0)
        void* ecx = *(eax_2 + 0x54)
        
        if (ecx != 0)
            return sub_67d120(ecx)
else if (eax == 1 && *(arg1 + 0xdc) != 0)
    void* eax_5 = *(*(arg1 + 0xe0) + 0x70)
    
    if (eax_5 != 0)
        return *(eax_5 + 0x29c)

return 0
