---
title: VirtualBox - Ubuntu
permalink: /vbubuntu
---
<a name="top"></a>  
## This is the companion page for the VirtualBox Ubuntu Video

<br/><br/>
<p align="center">
<iframe width="560" height="315" src="" data-src="https://www.youtube.com/embed/Z8dwXODQrLg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/><br/>


The video and this guide will walk you through step-by-step of setting up a VirtualBox Virtual Machine on your computer and using it to install a fresh Ubuntu Virtual Machine installation.
<br/><br/>

This is a rather long and thorough guide, so I have included an index of the major topics:<br/>
[Recommendations and Key Terms](#recommendations-and-key-terms)<br/>
[Download Ubuntu ISO](#download-ubuntu-iso)<br/>
[Download and Install VirtualBox Software](#download-and-install-virtualbox-software)<br/>
[Create a New Virtual Machine](#create-a-new-virtual-machine)<br/>
[Configuring Virtual Machine for Ubuntu Install](#configuring-the-virtual-machine-for-a-ubuntu-install)<br/>
[Installing Ubuntu on your Virtual Machine](#installing-ubuntu-on-your-virtual-machine)<br/>
[Installing Guest Additions](#installing-guest-additions)<br/>
[Create a Shared Folder](#create-a-shared-folder)<br/>
[Drag and Drop](#drag-and-drop)<br/>
[Create an Initial Snapshot Image](#create-a-initial-snapshot-image)<br/>


<br/><br/>
## Recommendations and Key Terms
<br/>

Before we start, I want to quickly go over a few items:

To follow along with this guide you should have a HDD (SSD preferred) with at least 200 GB of free space, but more is better. Alternatively, you could use an external disk drive with a similar free space capacity, it will be a bit slower but still workable.

If you do not already have a Ubuntu ISO image file, you will also need a high speed Internet connection as we will be downloading a ~2 GB Ubuntu ISO image file. Using a 100 Mbps connection it takes roughly 4 minutes for the download portion, so you can use that as a base reference (i.e. a 10 Mbps connection will take 40 minutes and so on).

<br/><br/>

There are also a few terms I wish to clarify: VM, VB, host system and guest system.

- VM is short for Virtual Machine, a general term describing a computer environment that is virtualized. The VM is the virtual "guest" system that will run on your host.

- VB is short for the Oracle VirtualBox software we are using to create and run our VM (Virtual Machines).

- The ‘host system’ is the physical PC you are probably using right now that you intend to install the VB software on to run the virtual guest machine.

- The ‘guest system’ then is the Virtual Machine that you will be running using the VB software, in this case the virtual Ubuntu system we will be installing.
<br/><br/>

[Back to Top](#this-is-the-companion-page-for-the-virtualbox-ubuntu-video)

<br/>


## Download and Install VirtualBox Software
<br/>

We will need to download the VirtualBox software from Oracle.

Go to [https://www.virtualbox.org/](https://www.virtualbox.org/) and click on Download VirtualBox 6.1 (as of this writing) to go to the download page to begin downloading the Virtualbox software.

<br/><br/><br/>
<p align="center">
<img width="700" height="421" src="images\videos\VirtualBox\VB-Home-2.jpg" title="VirtualBox Download Page">
</p>
Select your host platform, in this example I am using Windows 10 as the host system, so we select Windows hosts link.

A download dialog should appear prompting you to save the file, go ahead and save it to your downloads folder or wherever you typically download files.

Once the download has finished, open up your download folder and double click on the VirtualBox-xxx.exe file to begin the installation, where xxx is the current version number. As of this writing the file is: VirtualBox-6.1.2-135663-Win.exe

<br/><br/><br/>
<p align="center">
<img width="600" height="470" src="images\videos\VirtualBox\VB-Welcome-to-Setup.jpg" title="VirtualBox Welcome to Setup">
</p>
The Welcome to Setup Wizard Screen will appear.

Click on Next to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="467" src="images\videos\VirtualBox\VB-Custom-Setup.jpg" title="VirtualBox Custom Setup">
</p>
On the Custom Setup screen, you can leave the selected components checked. It does indicate that this will use 218 MB of space on your hard drive. You may want to install this in another directory if hard drive space is tight.

By default it uses the C:\Program Files\Oracle\VirtualBox\ directory.

Once you have your installation folder configured, or if you are using the default path, click on Next.

<br/><br/><br/>
<p align="center">
<img width="600" height="470" src="images\videos\VirtualBox\VB-Custom-Setup-2.jpg" title="VirtualBox Custom Setup 2">
</p>
The next screen allows you to choose from the following options:
-    Create a start menu entry  
-    Create a Desktop shortcut  
-    Create a shortcut in the Quick Launch bar  
-    Register file associations  

Pick which options you want to enable, but I would recommend enabling at least the last choice to associate file extensions.

Click on Next to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="467" src="images\videos\VirtualBox\VB-Network.jpg" title="VirtualBox Network Warning">
</p>
The next screen warns you that by continuing your network connection may momentarily drop as VirtualBox configures its virtual network settings.

This only takes a second so you will hardly notice unless you are installing on a device with a wireless connection.

Click on Yes to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="451" src="images\videos\VirtualBox\VB-Install.jpg" title="VirtualBox Ready to Install">
</p>

You will then be presented with a Ready to Install screen informing you the wizard is about to start the custom installation. Now is the time to make any changes by using the "Back" button if you need.

Click on Install to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="451" src="images\videos\VirtualBox\VB-Install2.jpg" title="VirtualBox Device Driver">
</p>
You may get one or more install device driver prompts during installation.

I usually just check the trust software from Oracle box and click on Install to avoid further prompts.

<br/><br/><br/>
<p align="center">
<img width="600" height="466" src="images\videos\VirtualBox\VB-Install-Finish.jpg" title="VirtualBox Installation Complete">
</p>
Once the setup process has completed, you will see a new window like above.

It has the option to Launch the Oracle VM VirtualBox after installation checked by default. You can go ahead and leave it checked to continue on with the guide.

Click on Finish.

<br/><br/>

[Back to Top](#this-is-the-companion-page-for-the-virtualbox-ubuntu-video)

<br/>
## Create a New Virtual Machine
<br/>

If you are following along in the guide step by step and you left the box checked in the previous step you should already have the screen shown below on your PC. If not, or if you unchecked the box, find the VirtualBox icon or executable and launch the program at this time.
<br/><br/>

<p align="center">
<img width="700" height="444" src="images\videos\VirtualBox\VB-Welcome.jpg" title="VirtualBox Welcome">
</p>
From the Welcome to VirtualBox screen, click on New.
<br/><br/><br/>
<p align="center">
<img width="500" height="459" src="images\videos\VBUbuntu\Create_VM_Name_OS.jpg" title="VirtualBox Name and OS">
</p>
Give your VM a name, such as Ubuntu.

Choose the installation folder, I chose the folder on my C: drive: C:\Users\dev\VirtualBox_VMs.

Type: Linux

Choose Version, in this case Ubuntu (64-bit).

Note that the VirualBox manager has a smart syntax process, so when you type in Ubuntu it will automatically fill in the fields for Linux and Ubuntu.

Click Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="464" src="images\videos\VBUbuntu\Memory_Size.jpg" title="VirtualBox Memory">
</p>
Set the memory size. I chose 4 GB in this example.

Choose no more than ½ of your actual physical RAM to prevent having issues on your host system. I found that 4-8 GB seems to be the sweet spot and works well in most cases.

You can get by with as little as 2 GB, but depending on what applications you are planning on running, the VM can get a bit sluggish with too little RAM.

Once you have the memory size set, Click Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="467" src="images\videos\VBUbuntu\Hard Disk.jpg" title="VirtualBox Create a Virtual HD">
</p>
Make sure Create a virtual hard disk now is selected.

Click on Create.

<br/><br/><br/>
<p align="center">
<img width="500" height="522" src="images\videos\VBUbuntu\Hard Disk_File_Type.jpg" title="VirtualBox Hard Disk File Type">
</p>
For Hard disk file type you can leave it at VDI for this example. The other options are for compatibility with other VM's.

Click on Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="526" src="images\videos\VBUbuntu\Storage_on_Physical_Hard_Disk.jpg" title="VirtualBox Storage on Physical HDD">
</p>
For now choose Dynamically Allocated, unless you have a lot of free hard drive space available. As the dialog indicates, a fixed size can offer some performance benefits, but at the expense that it reserves all the disk space up front.

Choose the option that serves you best and then click on Next.

<br/><br/><br/>
<p align="center">
<img width="700" height="446" src="images\videos\VBUbuntu\File_Location_and_Size.jpg" title="VirtualBox File Location and Size">
</p>
File location and size. This is where your Virtual Machines hard drive will live. I created a folder on an separate SDD, the E: drive for this demonstration: E:\Ubuntu_VM_Image.
I also increased the recommended size from 25 GB to 120 GB, so I have plenty of room to work with.

Once you are done adjusting these settings to meet your needs, click on Create.

This will take you back to the home screen. You now have a Virtual Machine that is the equivalent to a bare metal PC. At this stage it still needs an OS installed on it to be useful.
<br/><br/>

[Back to Top](#this-is-the-companion-page-for-the-virtualbox-ubuntu-video)

<br/>
## Configuring the Virtual Machine for a Ubuntu Install
<br/>

Before we can install the OS we need to go into the settings for the VM we just created and review and adjust anything we may have missed or wish to change. We also need to setup the virtual optical drive to point to our Ubuntu 18.04.3 LTS ISO image we downloaded earlier.

Making sure the Ubuntu VM is selected in the left pane, click on Settings near the top.

<br/><br/><br/>
<p align="center">
<img width="600" height="422" src="images\videos\VBUbuntu\VB_Ubuntu_VM_Settings.jpg" title="VirtualBox Ubuntu VM Settings">
</p>

Review the basic settings under general, they should match what you entered earlier.

Click on System in the left pane.

<br/><br/><br/>
<p align="center">
<img width="600" height="418" src="images\videos\VBUbuntu\VB_System_MB.jpg" title="VirtualBox Ubuntu VM System CPU">
</p>
Under the Motherboard tab, verify the memory allocation you configured earlier, you can also change it here if you need to.

In the Boot Order section, I uncheck Floppy from the boot order menu, but leave the Optical and Hard Disk selections checked.

Leave PIIX3 under chipset.

Also leave Enable I/O APIC checked.

Click on the Processor tab

<br/><br/><br/>
<p align="center">
<img width="600" height="418" src="images\videos\VBUbuntu\VB_System_CPU.jpg" title="VirtualBox Ubuntu VM CPU Settings">
</p>
If you have more than one core, you can increase it here. Like with memory I would advise to choose no more than ½ of your actual cores. I usually choose 2 cores on a multi-core (4+ core) host.

You can leave the execution cap at 100% as long as you are not using all of your physical cores. If you for some reason are using a single or dual core host machine, you may want to reduce this a bit just to be sure you always leave a bit of processing power for the actual host.

Leave everything at the default settings on the acceleration tab.

<br/><br/><br/>
<p align="center">
<img width="600" height="421" src="images\videos\VBUbuntu\VB_System_Display.jpg" title="VirtualBox Ubuntu VM Display Settings">
</p>
Under Display, ensure that Video Memory is set to 128 MB and VMSVGA is selected. You can leave 3D acceleration unchecked unless you plan to use it in some way, but most 3D applications don’t work too well in a VM environment.

<br/><br/><br/>
<p align="center">
<img width="600" height="420" src="images\videos\VBUbuntu\VB_Storage.jpg" title="VirtualBox Ubuntu VM Storage Settings">
</p>
Under Storage we will need to select the image file for the OS you wish to run. This can be Linux or Windows, but since in this guide we are installing Ubuntu, we will use the Ubuntu 18.04.3 LTS ISO image file we downloaded earlier. This will act as the installation media, the same as if we had a Ubuntu setup DVD inserted within the optical drive.

Click on the DVD icon under Controller SATA, it should say empty at this point. Over in the right half of the window click the disk icon and then choose disk file.

<br/><br/><br/>
<p align="center">
<img width="600" height="288" src="images\videos\VBUbuntu\VB_Storage2.jpg" title="VirtualBox Ubuntu VM Storage Settings">
</p>
Browse to the Ubuntu ISO image you downloaded earlier. Click on its name to select it and make sure it is entered into the File Name field as shown above, then click on open.

<br/><br/><br/>
<p align="center">
<img width="600" height="418" src="images\videos\VBUbuntu\VB_Storage3.jpg" title="VirtualBox Ubuntu VM Storage Settings">
</p>

Your screen should now show ubuntu-18.04.3-desktop-amd64.iso along with the Ubuntu.vdi disk, as shown in the image above. Now that we have our installation media configured we are almost ready to begin installing Ubuntu on our VM.

<br/><br/><br/>
<p align="center">
<img width="600" height="419" src="images\videos\VBUbuntu\VB_Network.jpg" title="VirtualBox Ubuntu VM Network Settings">
</p>
Go down to the Network section just to be sure Enable network adapter and Attached to Nat are both selected.

The rest of the settings should be fine for now. We will look at setting up Shared Folders later on once Ubuntu has been installed on the VM.

You can now click on OK to leave the settings window and save your changes.
<br/><br/>

[Back to Top](#this-is-the-companion-page-for-the-virtualbox-ubuntu-video)

[Back to Top](#top)

<br/><br/>

## Installing Ubuntu on your Virtual Machine
