// 函数: __getfpstatusword
// 地址: 0x72050d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_8 = arg1.b
int32_t var_c = arg1
int32_t ecx = 0
var_8 = 0
char var_c_1 = 0
bool c0
bool c1
bool c2
bool c3
var_8 = ((c0 ? 1 : 0) << 8).b | ((c1 ? 1 : 0) << 9).b | ((c2 ? 1 : 0) << 0xa).b
    | ((c3 ? 1 : 0) << 0xe).b

if (data_7fc25c s>= 1)
    var_c_1 = arg2

int32_t eax = 0

if ((var_8 & 0x3d) != 0)
    if ((var_8 & 1) != 0)
        eax = 0x100010
    
    if ((var_8 & 4) != 0)
        eax |= 0x80008
    
    if ((var_8 & 8) != 0)
        eax |= 0x40004
    
    if ((var_8 & 0x10) != 0)
        eax |= 0x20002
    
    if ((var_8 & 0x20) != 0)
        eax |= 0x10001

if ((var_c_1 & 0x3d) != 0)
    if ((var_c_1 & 1) != 0)
        ecx = 0x10000010
    
    if ((var_c_1 & 4) != 0)
        ecx |= 0x8000008
    
    if ((var_c_1 & 8) != 0)
        ecx |= 0x4000004
    
    if ((var_c_1 & 0x10) != 0)
        ecx |= 0x2000002
    
    if ((var_c_1 & 0x20) != 0)
        ecx |= 0x1000001

return (eax | ecx) & 0x1f1f001f
