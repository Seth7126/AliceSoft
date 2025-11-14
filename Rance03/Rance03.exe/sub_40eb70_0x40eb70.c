// 函数: sub_40eb70
// 地址: 0x40eb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1

if (arg1 == 0)
    return 0xffffffff

int32_t eax_2 = (*(*arg1 + 0x2c))()
int32_t esi = 0

if (eax_2 s> 0)
    do
        int32_t result = (*(*arg1 + 0x30))(esi)
        
        if (arg2 == (*(*arg1 + 0x18))(result))
            return result
        
        esi += 1
    while (esi s< eax_2)

return 0xffffffff
