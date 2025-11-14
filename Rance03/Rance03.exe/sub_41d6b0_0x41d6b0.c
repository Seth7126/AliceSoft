// 函数: sub_41d6b0
// 地址: 0x41d6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
*(arg1 + 0x88) = *(arg2 + 4)
*(arg2 + 8) = arg1
int32_t eax_2 = (*(**(arg1 + 4) + 8))()
int32_t esi = 0

if (eax_2 s> 0)
    do
        int32_t eax_3 = (*(**(arg1 + 4) + 0x10))(esi)
        
        if (eax_3 != 0 && sub_41e270(arg1, eax_3) == 0)
            return 0
        
        esi += 1
    while (esi s< eax_2)

sub_41fa70(arg1 + 0x88)
LRESULT result
result.b = 1
return result
