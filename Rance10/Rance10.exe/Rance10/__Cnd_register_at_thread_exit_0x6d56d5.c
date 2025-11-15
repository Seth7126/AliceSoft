// 函数: __Cnd_register_at_thread_exit
// 地址: 0x6d56d5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = &data_7fbb78
sub_6d0c79()

do
    if (*(i + 0x190) != 0x14)
        int32_t j = 0
        void* ecx_2 = i + 8
        
        do
            if (*ecx_2 == 0)
                int32_t* esi_1 = j * 0x14
                HANDLE eax_2
                int32_t edx_1
                eax_2, edx_1 = __Thrd_current(ecx_2)
                *(esi_1 + i) = eax_2
                *(esi_1 + i + 8) = arg2
                *(esi_1 + i + 4) = edx_1
                *(esi_1 + i + 0xc) = arg1
                *(esi_1 + i + 0x10) = arg3
                *(i + 0x190) += 1
                break
            
            j += 1
            ecx_2 += 0x14
        while (j s< 0x14)
        
        i = nullptr
    else
        if (*(i + 0x194) == 0)
            int32_t var_18_1 = 1
            *(i + 0x194) = _calloc()
        
        i = *(i + 0x194)
while (i != 0)

return sub_6d0c85() __tailcall
