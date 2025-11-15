// 函数: sub_63dab0
// 地址: 0x63dab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct textfile::CTextFileWriter::VTable** var_4 = arg1
struct textfile::CTextFileWriter::VTable** eax = data_7fcbc0

if (eax == 0)
    eax = sub_6e810c(0x18)
    var_4 = eax
    data_7fcbc0 = eax
    *eax = &textfile::CTextFileWriter::`vftable'
    eax[1] = &filesystem::CFile::`vftable'
    eax[2] = 0xffffffff
    eax[3] = 0
    eax[4] = 0
    eax[5].b = 0

eax[5].b = 0
HANDLE hObject = eax[2]

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    eax[2] = 0xffffffff

return sub_67ece0(&eax[1], arg1) != 0
