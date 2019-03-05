# Kernel Data Structures

- 修改 kernel module 以便使用 kernel linked-list data struture。
- 定義 birthday
- Inserting Elements into the Linked List
- Traversing the Linked List
- Removing Elements from the Linked List

## 作業內容

- 創建 5 個 struct birthday 的 linked list
- Traverse linked list 且 ouput 至 kernel log buffer
- 使用 domes 確保 list 正確

1. [hello world](https://jerrynest.io/how-to-write-a-linux-kernel-module/)
2. [printk() 使用說明](http://huenlil.pixnet.net/blog/post/23271426-printk%28%29-%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8E)
3. [list_head 結構](https://myao0730.blogspot.com/2016/12/linux.html)
4. [License and Module](https://blog.wu-boy.com/2010/07/linux-kernel-%E7%B0%A1%E5%96%AE-hello-world-license-and-module-%E4%BB%8B%E7%B4%B9part-3/)
5. [list_for_each_entry](https://blog.csdn.net/xubin341719/article/details/7098611)
6. 



## 使用

1. 編譯

   — make

2. 載入 hw.ko

   — sudo insmod hw.ko

3. 用 lsmod 確認 module 是否成功載入

   — sudo lsmod | grep "hw"

4. 移除 module

   — sudo rmmod hw.ko

5. 查看系統日誌

   — dmesg

   