// 函数: __mtdeletelocks
// 地址: 0x6a664e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i_1 = &data_74aee0

for (void* i = &data_74aee0; i s< &data_74b000; i += 8)
    CRITICAL_SECTION* lpCriticalSection = *i
    
    if (lpCriticalSection != 0 && *(i + 4) != 1)
        DeleteCriticalSection(lpCriticalSection)
        _free(lpCriticalSection)
        *i = 0

do
    if (*i_1 != 0 && *(i_1 + 4) == 1)
        DeleteCriticalSection(*i_1)
    
    i_1 += 8
while (i_1 s< &data_74b000)
