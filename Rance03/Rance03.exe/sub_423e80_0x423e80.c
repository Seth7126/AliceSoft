// 函数: sub_423e80
// 地址: 0x423e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* eax = arg1
int32_t result = 0
void* var_4 = eax
int32_t esi = 0

if (arg3 s> 0)
    do
        void* edi_1 = *(eax + 0xe0)
        int32_t eax_4 = (*(**(edi_1 + 0xc) + 0x24))((*(**(edi_1 + 8) + 0x1c))(arg2), esi + result)
        
        if (eax_4 s>= 0x12 && (eax_4 s<= 0x13 || eax_4 == 0x33))
            result += 1
        
        eax = var_4
        esi += 1
    while (esi s< arg3)

return result
