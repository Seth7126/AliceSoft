// 函数: __Cnd_unregister_at_thread_exit
// 地址: 0x6d5761
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = &data_7fbb78
sub_6d0c79()

do
    int32_t j = 0
    
    if (*(i + 0x190) != 0)
        void* eax_1 = i + 8
        
        while (j s< 0x14)
            if (*eax_1 == arg1)
                *eax_1 = 0
                *(i + 0x190) -= 1
            
            j += 1
            eax_1 += 0x14
            
            if (*(i + 0x190) == 0)
                break
    
    i = *(i + 0x194)
while (i != 0)

return sub_6d0c85() __tailcall
