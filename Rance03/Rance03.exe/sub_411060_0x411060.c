// 函数: sub_411060
// 地址: 0x411060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hDlg
int32_t* edx
hDlg, edx = __chkstk(0x4004)
int32_t eax_1 = __security_cookie ^ &__return_addr
__return_addr.b = 0
GetDlgItemTextA(hDlg, 0x9cce, &__return_addr, 0x3fff)
void* ecx

if (__return_addr.b != 0)
    void* const* ecx_1 = &__return_addr
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - &__return_addr:1
else
    ecx = nullptr

int32_t* result = sub_402110(edx, &__return_addr, ecx)
sub_69a5bc(eax_1 ^ &__return_addr)
return result
