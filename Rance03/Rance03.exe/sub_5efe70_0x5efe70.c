// 函数: sub_5efe70
// 地址: 0x5efe70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbd51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CExternalFontPack::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CExternalFontPack::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CExternalFontPack::`vftable'
int32_t var_4 = 2
sub_5f03e0(arg1)
var_4.b = 1
int32_t* ecx = arg1[9]
arg1[8] = &chipmunk::CZlibDecompressor::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[9] = 0

var_4.b = 0
sub_4414b0(&arg1[5])
BOOL hObject = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[2] = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
