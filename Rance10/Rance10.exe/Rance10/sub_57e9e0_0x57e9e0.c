// 函数: sub_57e9e0
// 地址: 0x57e9e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(arg1[3] + 4)
int32_t* eax_2 = *arg1
int32_t* i = *eax_2
int32_t* i_1 = i

if (i != eax_2)
    do
        void* eax_3 = i[0xb]
        
        if (eax_3 == 0 || *(eax_3 + 4) != 1)
            sub_429080(&i_1)
        else
            sub_429080(&i_1)
            void var_4
            sub_57f1e0(arg1, &var_4, i)
        
        i = i_1
    while (i != *arg1)

return LeaveCriticalSection(arg1[3] + 4)
