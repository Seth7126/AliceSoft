// 函数: sub_476940
// 地址: 0x476940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t arg_4 = arg_4
void* edi = nullptr
EnterCriticalSection(arg1[0x24] + 4)
sub_42f3d0(&arg1[0x21], &var_4, &arg_4)
int32_t* eax_3 = var_4

if (eax_3 != arg1[0x21])
    edi = eax_3[5]

LeaveCriticalSection(arg1[0x24] + 4)

if (edi != 0)
    return (*(**(edi + 4) + 0x20))()

return 0
