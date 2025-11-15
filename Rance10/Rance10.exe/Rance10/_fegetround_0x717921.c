// 函数: _fegetround
// 地址: 0x717921
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t mxcsr
int16_t x87control
return __getfpcontrolword(ecx, mxcsr, x87control) & 0x300
