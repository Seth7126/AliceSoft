// 函数: sub_4883e0
// 地址: 0x4883e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t arg_4 = arg_4
float edi = 0f
EnterCriticalSection(arg1[0x1d] + 4)
sub_42eb70(&arg1[0x1a], &var_4, &arg_4)
void** eax_3 = var_4

if (eax_3 != arg1[0x1a])
    edi = eax_3[5]

LeaveCriticalSection(arg1[0x1d] + 4)

if (edi == 0)
    int32_t result
    result.b = 0
    return result

HANDLE hHandle = *(edi i+ 0x44)
enum WAIT_EVENT eax_6

if (hHandle != 0)
    eax_6 = WaitForSingleObject(hHandle, 0)

if (hHandle == 0 || eax_6 != WAIT_TIMEOUT)
    int32_t var_14_3 = 0xffffffff
    long double x87_r0
    sub_4864e0(arg1[0x27], x87_r0, edi)
    sub_4893f0(edi, 0, 0)

return (*(**(edi i+ 4) + 0x10))()
