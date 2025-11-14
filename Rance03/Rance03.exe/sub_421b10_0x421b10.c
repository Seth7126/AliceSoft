// 函数: sub_421b10
// 地址: 0x421b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg3
int32_t var_24 = eax
int32_t var_20 = eax
int32_t var_40 = 0xffff0002
int32_t var_3c = 0x27
struct HWND__* lParam = arg1[1]
int32_t* ecx

if (arg2[5] u< 0x10)
    ecx = arg2
else
    ecx = *arg2

int32_t* var_2c = ecx
int32_t var_28 = arg2[4] + 1
int32_t var_18 = arg4
LRESULT eax_6 = SendMessageA(*arg1, 0x1100, 0, &lParam)
struct HWND__** result = sub_69adc6(8)

if (result == 0)
    result = nullptr
else
    *result = *arg1
    result[1] = eax_6

arg3 = result

if (result == 0)
    return result

sub_412de0(&arg1[0xc], &arg3)
return *(arg3 + 4)
