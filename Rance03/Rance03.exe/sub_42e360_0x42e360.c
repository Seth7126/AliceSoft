// 函数: sub_42e360
// 地址: 0x42e360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 8)

if (ecx == 0)
    return 0

int32_t eax_2 = (**ecx)()
int32_t result = 0
int32_t esi = 0

if (eax_2 s> 0)
    do
        int32_t* eax_3 = (*(**(arg1 + 8) + 4))(esi)
        
        if (eax_3 != 0)
            result += (*(*eax_3 + 0x14))()
        
        esi += 1
    while (esi s< eax_2)

return result
