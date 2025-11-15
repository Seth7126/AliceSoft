// 函数: sub_4a3a50
// 地址: 0x4a3a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** lpFileName_1
int32_t eax_1 = __security_cookie ^ &lpFileName_1
void* ecx
sub_4a38e0(ecx, &lpFileName_1)
int32_t var_14
int32_t var_10
uint32_t ebx

if (var_14 != 0)
    void** lpFileName = &lpFileName_1
    
    if (var_10 u>= 0x10)
        lpFileName = lpFileName_1
    
    uint32_t eax_2 = GetFileAttributesA(lpFileName)
    
    if (eax_2 != 0xffffffff)
        ebx.b = not.b((eax_2 u>> 4).b)
        ebx.b &= 1
    else
        ebx.b = 0
else
    ebx.b = 0

if (var_10 u>= 0x10)
    sub_403160(lpFileName_1, var_10 + 1, 1)

int32_t result
result.b = ebx.b
@__security_check_cookie@4(eax_1 ^ &lpFileName_1)
return result
