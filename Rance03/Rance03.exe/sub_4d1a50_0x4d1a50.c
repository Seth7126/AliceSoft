// 函数: sub_4d1a50
// 地址: 0x4d1a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* edi = arg1
void* ebx = edi[0x10]
var_4:3.b = *(ebx + 0x47c)
int32_t __saved_esi_2 = *(*(*(ebx + 0x50) + 0x58) + 0x90)

if (__saved_esi_2 s> 0)
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t eax_3
    eax_3, arg1 = sub_4a56f0(*(ebx + 0x54))
    
    if (eax_3 != 0 && var_4:3.b == 0)
        (*(*edi + 0x38))(sub_4a2a30(ebx))

void* result = edi[0xd]
arg1.b = *(edi[0x10] + 0x79) == 0
*(result + 0x1c) = arg1.b
return result
