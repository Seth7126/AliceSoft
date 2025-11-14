// 函数: sub_41d630
// 地址: 0x41d630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
*(arg1 + 0x4c) = *(arg2 + 4)
*(arg2 + 8) = arg1
int32_t eax_2 = (*(**(arg1 + 4) + 0x14))()
int32_t esi = 0

if (eax_2 s> 0)
    do
        char* eax_3
        
        if ((*(**(arg1 + 4) + 0x1c))(esi) == 0)
            eax_3.b = 0
            return eax_3
        
        eax_3 = (*(**(arg1 + 4) + 0x1c))(esi)
        
        if (eax_3 == 0)
            eax_3.b = 0
            return eax_3
        
        if (sub_41dcb0(arg1, eax_3).b == 0)
            eax_3.b = 0
            return eax_3
        
        esi += 1
    while (esi s< eax_2)

sub_41fa70(arg1 + 0x4c)
LRESULT eax_6
eax_6.b = 1
return eax_6
