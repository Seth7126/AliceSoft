// 函数: ??0scoped_fp_state_reset@?A0x48fbfdd4@@QAE@XZ
// 地址: 0x71ed83
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = _fegetenv(arg1)
int32_t eax_1 = *arg1 & 0x1f

if (eax_1.b != 0x1f)
    _feholdexcept(eax_1, edx, arg1, arg1)
    arg1[2].b = 1
else
    arg1[2].b = 0

return arg1
