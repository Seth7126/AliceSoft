// 函数: sub_488480
// 地址: 0x488480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t arg_4 = arg_4
void* edi = nullptr
EnterCriticalSection(arg1[0x1d] + 4)
sub_42eb70(&arg1[0x1a], &var_4, &arg_4)
void** eax_3 = var_4

if (eax_3 != arg1[0x1a])
    edi = eax_3[5]

LeaveCriticalSection(arg1[0x1d] + 4)

if (edi != 0)
    return (*(**(edi + 4) + 0x14))()

int32_t result
result.b = 0
return result
