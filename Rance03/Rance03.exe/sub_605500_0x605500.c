// 函数: sub_605500
// 地址: 0x605500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WIN32_FIND_DATAA findFileData
int32_t eax_1 = __security_cookie ^ &findFileData

if (arg1[5] u>= 0x10)
    arg1 = *arg1

HANDLE hFindFile = FindFirstFileA(arg1, &findFileData)

if (hFindFile == 0xffffffff)
    hFindFile.b = 0
    sub_69a5bc(eax_1 ^ &findFileData)
    return hFindFile

FindClose(hFindFile)
uint8_t eax_2 = not.b(findFileData.dwFileAttributes.b u>> 4) & 1
sub_69a5bc(eax_1 ^ &findFileData)
return eax_2
