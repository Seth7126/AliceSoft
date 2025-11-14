// 函数: _copy_environ
// 地址: 0x6ad837
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = 0
int32_t* eax = arg1

if (arg1 == 0)
    return eax

if (*arg1 != 0)
    do
        eax = &eax[1]
        ecx += 1
    while (*eax != 0)

int32_t* edi_1 = sub_69e723(ecx + 1, 4)
int32_t* ebx_1 = edi_1

if (edi_1 == 0)
    __amsg_exit(9)
    noreturn

char* i = *arg1

if (i != 0)
    void* esi_1 = arg1 - edi_1
    
    do
        *edi_1 = __strdup(i)
        edi_1 = &edi_1[1]
        i = *(esi_1 + edi_1)
    while (i != 0)

*edi_1 = 0
return ebx_1
