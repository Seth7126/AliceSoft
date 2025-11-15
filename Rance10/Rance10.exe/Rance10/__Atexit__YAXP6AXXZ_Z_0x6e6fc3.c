// 函数: ?_Atexit@@YAXP6AXXZ@Z
// 地址: 0x6e6fc3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = data_7e1008

if (eax == 0)
    noreturn _abort() __tailcall

data_7e1008 = eax - 1
int32_t result = EncodePointer(arg1)
*((data_7e1008 << 2) + &data_7fbe24) = result
return result
