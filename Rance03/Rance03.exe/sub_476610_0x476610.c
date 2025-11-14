// 函数: sub_476610
// 地址: 0x476610
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
    return (*(**(edi + 4) + 0x38))()

int32_t result
result.b = 0
return result
