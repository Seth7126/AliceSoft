// 函数: _fegetenv
// 地址: 0x7210ee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t ecx
int32_t ecx_1
int32_t mxcsr
int16_t x87control
eax, ecx_1 = __getfpcontrolword(ecx, mxcsr, x87control)
*arg1 = eax
arg1[1] = __getfpstatusword(ecx_1, mxcsr.b)
return 0
