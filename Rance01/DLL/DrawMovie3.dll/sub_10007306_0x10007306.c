// 函数: sub_10007306
// 地址: 0x10007306
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* i = &data_10020330
int32_t edi
int32_t var_c = edi

do
    CRITICAL_SECTION* lpCriticalSection_1 = *i
    
    if (lpCriticalSection_1 != 0 && *(i + 4) != 1)
        DeleteCriticalSection(lpCriticalSection_1)
        sub_10003602(lpCriticalSection_1)
        *i = 0
    
    i += 8
while (i s< &data_10020450)

CRITICAL_SECTION* lpCriticalSection

for (void* i_1 = &data_10020330; i_1 s< &data_10020450; i_1 += 8)
    lpCriticalSection = *i_1
    
    if (lpCriticalSection != 0 && *(i_1 + 4) == 1)
        lpCriticalSection = DeleteCriticalSection(lpCriticalSection)

return lpCriticalSection
