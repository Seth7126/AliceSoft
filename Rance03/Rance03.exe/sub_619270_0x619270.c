// 函数: sub_619270
// 地址: 0x619270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*arg2 + 0x10))()
int32_t* eax_2 = (*(*arg2 + 0x14))()
int32_t ebx
ebx.b = (*(*arg2 + 0x24))()
char eax_4 = (*(*arg2 + 0x28))()

if (ebx.b != 0)
    if (eax_4 == 0)
        eax_4 = sub_619190(arg1, eax_1, eax_2)
    else
        eax_4 = sub_619120(arg1, eax_1, eax_2)
    
    if (eax_4 != 0)
        return 1
else if (eax_4 != 0 && sub_619200(arg1, eax_1, eax_2) != 0)
    return 1

return 0
