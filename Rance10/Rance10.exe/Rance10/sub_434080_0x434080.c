// 函数: sub_434080
// 地址: 0x434080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct apeg::CApegDecoder::VTable** var_4 = arg1
*arg1 = &apeg::CApegDecoder::`vftable'
arg1[0x2e] = &apeg::CPictureDecoder::`vftable'
arg1[0x36] = &apeg::CMacroBlockDecoder::`vftable'
void* ecx = arg1[0x2b]

if (ecx != 0)
    sub_403160(ecx, arg1[0x2d] - ecx, 1)
    arg1[0x2b] = 0
    arg1[0x2c] = 0
    arg1[0x2d] = 0

int32_t** eax_3 = arg1[0x29]
sub_4346e0(&arg1[0x29], &var_4, *eax_3, eax_3)
sub_403160(arg1[0x29], 1, 0x18)
BOOL hObject = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[2] = 0xffffffff

return hObject
