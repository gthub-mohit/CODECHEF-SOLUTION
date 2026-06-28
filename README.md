#CodeChef Submissions Dashboard

This repository automatically syncs and documents all my accepted CodeChef solutions. 

---

##How it Works
Every file and folder in this repository is dynamically deployed and maintained completely hands-free by my custom tool: **[CodeHub](https://github.com/gthub-mohit/CODE-HUB)**.

* **Automation:** Captures code from Monaco Editor instantly on submit click and fires the GitHub REST API.
* **Structure:** Organizes code chronologically into date-wise folders (`DD-MM-YY/`).
* **Logs:** Generates and appends daily summary tables automatically within each folder's local `README.md`.

---

##Repository View
```text
.
├── 28-06-26/              # Automatically created daily folder
│   ├── README.md          # Automatically updated daily summary table
│   └── TOTR.cpp           # C++ Solution file with custom metadata header
