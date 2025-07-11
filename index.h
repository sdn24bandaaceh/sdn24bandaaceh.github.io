<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Profil - SD Negeri 24 Banda Aceh</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;400;500;600;700&display=swap">
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Poppins', sans-serif;
        }

        :root {
            --primary: #4dabf5;
            --primary-light: #a5d8ff;
            --primary-dark: #1c7ed6;
            --secondary: #ffd43b;
            --accent: #ff6b6b;
            --light: #f8f9fa;
            --dark: #212529;
            --gray: #868e96;
            --success: #40c057;
        }

        body {
            background-color: #f0f8ff;
            color: #333;
            line-height: 1.6;
        }

        /* Header Styles */
        header {
            background: linear-gradient(135deg, var(--primary), var(--primary-light));
            padding: 1rem 0;
            box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
            position: sticky;
            top: 0;
            z-index: 100;
        }

        .header-container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 0 2rem;
            display: flex;
            justify-content: space-between;
            align-items: center;
        }

        .logo {
            display: flex;
            align-items: center;
            gap: 1rem;
        }

        .logo img {
            height: 70px;
            width: auto;
            border-radius: 50%;
            background: white;
            padding: 5px;
            box-shadow: 0 2px 8px rgba(0, 0, 0, 0.1);
        }

        .logo-text h1 {
            color: white;
            font-size: 1.8rem;
            font-weight: 700;
            text-shadow: 1px 1px 3px rgba(0, 0, 0, 0.3);
        }

        .logo-text p {
            color: #e7f5ff;
            font-size: 0.9rem;
            margin-top: 0.3rem;
        }

        nav ul {
            display: flex;
            list-style: none;
            gap: 1.5rem;
        }

        nav ul li a {
            color: white;
            text-decoration: none;
            font-weight: 500;
            font-size: 1.1rem;
            padding: 0.5rem 0.8rem;
            border-radius: 30px;
            transition: all 0.3s ease;
        }

        nav ul li a:hover,
        nav ul li a.active {
            background: rgba(255, 255, 255, 0.2);
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
        }

        .auth-buttons {
            display: flex;
            gap: 0.8rem;
        }

        .btn {
            padding: 0.6rem 1.5rem;
            border-radius: 30px;
            border: none;
            font-weight: 500;
            cursor: pointer;
            transition: all 0.3s ease;
            font-size: 1rem;
            display: inline-flex;
            align-items: center;
            gap: 0.5rem;
        }

        .btn-login {
            background: white;
            color: var(--primary-dark);
        }

        .btn-login:hover {
            background: #e7f5ff;
            transform: translateY(-2px);
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
        }

        .btn-admin {
            background: var(--secondary);
            color: #333;
        }

        .btn-admin:hover {
            background: #fcc419;
            transform: translateY(-2px);
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
        }

        /* Page Header */
        .page-header {
            background: linear-gradient(rgba(77, 171, 245, 0.9), rgba(165, 216, 255, 0.8)), url('https://images.unsplash.com/photo-1523050854058-8df90110c9f1?ixlib=rb-4.0.3') no-repeat center center/cover;
            height: 300px;
            display: flex;
            align-items: center;
            justify-content: center;
            text-align: center;
            color: white;
            padding: 0 2rem;
            margin-bottom: 3rem;
        }

        .page-header h1 {
            font-size: 3.5rem;
            font-weight: 700;
            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3);
            position: relative;
            padding-bottom: 1rem;
        }

        .page-header h1::after {
            content: "";
            position: absolute;
            bottom: 0;
            left: 50%;
            transform: translateX(-50%);
            width: 100px;
            height: 4px;
            background: var(--secondary);
            border-radius: 2px;
        }

        /* Breadcrumb */
        .breadcrumb {
            max-width: 1200px;
            margin: 0 auto 2rem;
            padding: 0 2rem;
        }

        .breadcrumb ul {
            display: flex;
            list-style: none;
            gap: 0.5rem;
            color: var(--gray);
        }

        .breadcrumb a {
            color: var(--primary-dark);
            text-decoration: none;
            transition: all 0.3s ease;
        }

        .breadcrumb a:hover {
            color: var(--primary);
            text-decoration: underline;
        }

        .breadcrumb li:not(:last-child)::after {
            content: ">";
            margin-left: 0.5rem;
        }

        /* Section Styles */
        section {
            padding: 3rem 2rem;
        }

        .container {
            max-width: 1200px;
            margin: 0 auto;
        }

        .section-title {
            text-align: center;
            margin-bottom: 3rem;
        }

        .section-title h2 {
            font-size: 2.5rem;
            color: var(--primary-dark);
            position: relative;
            display: inline-block;
            padding-bottom: 1rem;
        }

        .section-title h2::after {
            content: "";
            position: absolute;
            bottom: 0;
            left: 50%;
            transform: translateX(-50%);
            width: 80px;
            height: 4px;
            background: var(--secondary);
            border-radius: 2px;
        }

        .section-title p {
            color: var(--gray);
            max-width: 700px;
            margin: 1rem auto 0;
            font-size: 1.1rem;
        }

        /* Profil Content */
        .profile-content {
            display: grid;
            grid-template-columns: 1fr 350px;
            gap: 3rem;
            margin-bottom: 4rem;
        }

        @media (max-width: 992px) {
            .profile-content {
                grid-template-columns: 1fr;
            }
        }

        .history-card {
            background: white;
            border-radius: 15px;
            overflow: hidden;
            box-shadow: 0 8px 20px rgba(0, 0, 0, 0.08);
            padding: 2.5rem;
            margin-bottom: 3rem;
        }

        .history-card h3 {
            font-size: 1.8rem;
            color: var(--primary-dark);
            margin-bottom: 1.5rem;
            padding-bottom: 0.8rem;
            border-bottom: 2px solid var(--primary-light);
        }

        .history-card p {
            margin-bottom: 1.5rem;
            line-height: 1.8;
        }

        .history-image {
            width: 100%;
            height: 350px;
            border-radius: 10px;
            overflow: hidden;
            margin: 2rem 0;
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
        }

        .history-image img {
            width: 100%;
            height: 100%;
            object-fit: cover;
            transition: transform 0.5s ease;
        }

        .history-image:hover img {
            transform: scale(1.05);
        }

        /* Visi Misi */
        .visi-misi {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
            gap: 2rem;
            margin: 3rem 0;
        }

        .visi-card, .misi-card {
            background: white;
            border-radius: 15px;
            padding: 2rem;
            box-shadow: 0 8px 20px rgba(0, 0, 0, 0.08);
            transition: all 0.3s ease;
        }

        .visi-card:hover, .misi-card:hover {
            transform: translateY(-5px);
            box-shadow: 0 12px 25px rgba(0, 0, 0, 0.15);
        }

        .visi-card h3, .misi-card h3 {
            font-size: 1.6rem;
            color: var(--primary-dark);
            margin-bottom: 1.5rem;
            display: flex;
            align-items: center;
            gap: 1rem;
        }

        .visi-card h3 i, .misi-card h3 i {
            color: var(--secondary);
            font-size: 1.8rem;
        }

        .visi-card p {
            font-size: 1.1rem;
            line-height: 1.8;
            padding: 0 1rem;
            position: relative;
        }

        .visi-card p::before {
            content: """;
            position: absolute;
            top: -20px;
            left: -10px;
            font-size: 4rem;
            color: var(--primary-light);
            opacity: 0.5;
            font-family: Georgia, serif;
        }

        .misi-card ul {
            padding-left: 1.5rem;
        }

        .misi-card li {
            margin-bottom: 1rem;
            position: relative;
            padding-left: 1.5rem;
        }

        .misi-card li::before {
            content: "";
            position: absolute;
            left: 0;
            top: 10px;
            width: 8px;
            height: 8px;
            background: var(--primary);
            border-radius: 50%;
        }

        /* Sidebar */
        .sidebar {
            background: white;
            border-radius: 15px;
            overflow: hidden;
            box-shadow: 0 8px 20px rgba(0, 0, 0, 0.08);
        }

        .sidebar-widget {
            padding: 2rem;
            border-bottom: 1px solid #eee;
        }

        .sidebar-widget:last-child {
            border-bottom: none;
        }

        .sidebar-widget h3 {
            font-size: 1.5rem;
            color: var(--primary-dark);
            margin-bottom: 1.5rem;
            padding-bottom: 0.8rem;
            border-bottom: 2px solid var(--primary-light);
            display: flex;
            align-items: center;
            gap: 0.8rem;
        }

        .sidebar-widget h3 i {
            color: var(--secondary);
        }

        .principal-card {
            text-align: center;
            padding: 1.5rem;
        }

        .principal-img {
            width: 150px;
            height: 150px;
            border-radius: 50%;
            overflow: hidden;
            margin: 0 auto 1.5rem;
            border: 5px solid var(--primary-light);
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
        }

        .principal-img img {
            width: 100%;
            height: 100%;
            object-fit: cover;
        }

        .principal-card h4 {
            font-size: 1.4rem;
            color: var(--primary-dark);
            margin-bottom: 0.5rem;
        }

        .principal-card p {
            color: var(--gray);
            margin-bottom: 1rem;
        }

        .quick-links ul {
            list-style: none;
        }

        .quick-links li {
            margin-bottom: 0.8rem;
        }

        .quick-links a {
            display: flex;
            align-items: center;
            gap: 1rem;
            padding: 0.8rem 1rem;
            background: #f8f9fa;
            border-radius: 8px;
            color: var(--dark);
            text-decoration: none;
            transition: all 0.3s ease;
        }

        .quick-links a:hover {
            background: var(--primary-light);
            color: var(--primary-dark);
            transform: translateX(5px);
        }

        .quick-links a i {
            color: var(--primary);
            font-size: 1.2rem;
            width: 25px;
        }

        .statistics {
            display: grid;
            grid-template-columns: repeat(2, 1fr);
            gap: 1rem;
        }

        .stat-item {
            text-align: center;
            padding: 1.5rem;
            background: #f8f9fa;
            border-radius: 10px;
        }

        .stat-item i {
            font-size: 2.5rem;
            color: var(--primary);
            margin-bottom: 1rem;
        }

        .stat-item .number {
            font-size: 2rem;
            font-weight: 700;
            color: var(--primary-dark);
            margin-bottom: 0.5rem;
        }

        .stat-item .label {
            color: var(--gray);
            font-size: 0.9rem;
        }

        /* Footer */
        footer {
            background: linear-gradient(135deg, var(--primary-dark), var(--primary));
            color: white;
            padding: 4rem 2rem 2rem;
        }

        .footer-container {
            max-width: 1200px;
            margin: 0 auto;
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 2rem;
        }

        .footer-col h3 {
            font-size: 1.5rem;
            margin-bottom: 1.5rem;
            position: relative;
            padding-bottom: 0.8rem;
        }

        .footer-col h3::after {
            content: "";
            position: absolute;
            bottom: 0;
            left: 0;
            width: 50px;
            height: 3px;
            background: var(--secondary);
        }

        .footer-col p {
            margin-bottom: 1rem;
            opacity: 0.9;
        }

        .contact-info {
            list-style: none;
        }

        .contact-info li {
            margin-bottom: 1rem;
            display: flex;
            align-items: flex-start;
            gap: 1rem;
        }

        .contact-info i {
            color: var(--secondary);
            font-size: 1.2rem;
        }

        .social-links {
            display: flex;
            gap: 1rem;
            margin-top: 1.5rem;
        }

        .social-links a {
            display: flex;
            align-items: center;
            justify-content: center;
            width: 40px;
            height: 40px;
            background: rgba(255, 255, 255, 0.1);
            border-radius: 50%;
            color: white;
            font-size: 1.2rem;
            transition: all 0.3s ease;
        }

        .social-links a:hover {
            background: var(--secondary);
            color: var(--dark);
            transform: translateY(-3px);
        }

        .footer-links {
            list-style: none;
        }

        .footer-links li {
            margin-bottom: 0.8rem;
        }

        .footer-links a {
            color: rgba(255, 255, 255, 0.9);
            text-decoration: none;
            transition: all 0.3s ease;
            display: inline-flex;
            align-items: center;
            gap: 0.5rem;
        }

        .footer-links a:hover {
            color: var(--secondary);
            gap: 0.7rem;
        }

        .copyright {
            text-align: center;
            padding-top: 3rem;
            margin-top: 3rem;
            border-top: 1px solid rgba(255, 255, 255, 0.1);
            opacity: 0.8;
        }

        /* Responsive Design */
        @media (max-width: 992px) {
            .page-header h1 {
                font-size: 3rem;
            }
            
            .section-title h2 {
                font-size: 2.2rem;
            }
        }

        @media (max-width: 768px) {
            .header-container {
                flex-direction: column;
                gap: 1rem;
            }
            
            nav ul {
                flex-wrap: wrap;
                justify-content: center;
            }
            
            .page-header h1 {
                font-size: 2.5rem;
            }
            
            .section-title h2 {
                font-size: 2rem;
            }
            
            .history-card {
                padding: 1.5rem;
            }
        }

        @media (max-width: 576px) {
            .page-header {
                height: 250px;
            }
            
            .page-header h1 {
                font-size: 2rem;
            }
            
            .section-title h2 {
                font-size: 1.8rem;
            }
            
            .auth-buttons {
                flex-direction: column;
                width: 100%;
                max-width: 250px;
            }
            
            .btn {
                width: 100%;
                justify-content: center;
            }
            
            .visi-misi {
                grid-template-columns: 1fr;
            }
        }
    </style>
</head>
<body>
    <!-- Header Section -->
    <header>
        <div class="header-container">
            <div class="logo">
                <img src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxMDAiIGhlaWdodD0iMTAwIiB2aWV3Qm94PSIwIDAgMjQgMjQiIGZpbGw9Im5vbmUiIHN0cm9rZT0iIzFjN2VkNiIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiPjxjaXJjbGUgY3g9IjEyIiBjeT0iMTIiIHI9IjEwIi8+PHBhdGggZD0iTTEyIDE2djBNMTIgMTJsMi0ybTAtNGwtNCA0aDQiLz48L3N2Zz4=" alt="SDN 24 Logo">
                <div class="logo-text">
                    <h1>SD Negeri 24 Banda Aceh</h1>
                    <p>Berkualitas, Berkarakter, dan Berprestasi</p>
                </div>
            </div>
            
            <nav>
                <ul>
                    <li><a href="index.html">Beranda</a></li>
                    <li><a href="#" class="active">Profil</a></li>
                    <li><a href="#">Kurikulum</a></li>
                    <li><a href="#">Galeri</a></li>
                    <li><a href="#">Informasi</a></li>
                    <li><a href="#">Perpustakaan</a></li>
                    <li><a href="#">Layanan</a></li>
                </ul>
            </nav>
            
            <div class="auth-buttons">
                <button class="btn btn-login"><i class="fas fa-sign-in-alt"></i> Login</button>
                <button class="btn btn-admin"><i class="fas fa-user-cog"></i> Admin</button>
            </div>
        </div>
    </header>

    <!-- Page Header -->
    <div class="page-header">
        <h1>Profil Sekolah</h1>
    </div>

    <!-- Breadcrumb -->
    <div class="breadcrumb">
        <ul>
            <li><a href="index.html">Beranda</a></li>
            <li>Profil Sekolah</li>
        </ul>
    </div>

    <!-- Main Content -->
    <section>
        <div class="container">
            <div class="section-title">
                <h2>Mengenal SD Negeri 24</h2>
                <p>Sejarah, visi, misi, dan struktur kepemimpinan sekolah kami</p>
            </div>
            
            <div class="profile-content">
                <div class="main-content">
                    <!-- Sejarah Sekolah -->
                    <div class="history-card">
                        <h3>Sejarah Berdiri</h3>
                        <p>SD Negeri 24 Banda Aceh didirikan pada tahun 1985 sebagai bagian dari program pemerintah untuk meningkatkan akses pendidikan dasar di wilayah Banda Aceh. Sekolah ini mulai beroperasi dengan 5 ruang kelas dan 3 tenaga pengajar.</p>
                        
                        <p>Pada tahun 2004, sekolah mengalami kerusakan parah akibat bencana tsunami. Dengan bantuan berbagai pihak dan organisasi internasional, sekolah dibangun kembali dan diresmikan pada tahun 2006 dengan fasilitas yang lebih lengkap dan modern.</p>
                        
                        <div class="history-image">
                            <img src="https://images.unsplash.com/photo-1523240795612-9a054b0db644?ixlib=rb-4.0.3&auto=format&fit=crop&w=800&q=80" alt="Sejarah SD Negeri 24">
                        </div>
                        
                        <p>Saat ini, SD Negeri 24 Banda Aceh telah berkembang menjadi sekolah unggulan di kota Banda Aceh dengan lebih dari 600 siswa dan 40 tenaga pendidik. Sekolah kami telah meraih berbagai penghargaan di tingkat kota dan provinsi dalam bidang akademik maupun non-akademik.</p>
                        
                        <p>Kami terus berkomitmen untuk memberikan pendidikan terbaik yang memadukan kurikulum nasional dengan pengembangan karakter dan nilai-nilai kearifan lokal Aceh.</p>
                    </div>
                    
                    <!-- Visi dan Misi -->
                    <div class="section-title">
                        <h2>Visi dan Misi Sekolah</h2>
                        <p>Pedoman dalam mencapai tujuan pendidikan</p>
                    </div>
                    
                    <div class="visi-misi">
                        <div class="visi-card">
                            <h3><i class="fas fa-eye"></i> Visi Sekolah</h3>
                            <p>"Mewujudkan generasi berakhlak mulia, berprestasi akademik, kreatif, dan peduli lingkungan berdasarkan nilai-nilai budaya Aceh."</p>
                        </div>
                        
                        <div class="misi-card">
                            <h3><i class="fas fa-bullseye"></i> Misi Sekolah</h3>
                            <ul>
                                <li>Menyelenggarakan pembelajaran yang inovatif dan menyenangkan</li>
                                <li>Mengembangkan potensi akademik dan non-akademik siswa secara optimal</li>
                                <li>Menumbuhkan karakter religius dan budi pekerti luhur</li>
                                <li>Melestarikan nilai-nilai budaya dan kearifan lokal Aceh</li>
                                <li>Membangun lingkungan sekolah yang hijau, bersih, dan nyaman</li>
                                <li>Menjalin kerjasama dengan orang tua dan masyarakat</li>
                            </ul>
                        </div>
                    </div>
                    
                    <!-- Struktur Organisasi -->
                    <div class="section-title">
                        <h2>Struktur Organisasi</h2>
                        <p>Tim kepemimpinan dan manajemen sekolah</p>
                    </div>
                    
                    <div class="history-card">
                        <h3>Kepemimpinan Sekolah</h3>
                        <p>SD Negeri 24 Banda Aceh dipimpin oleh seorang Kepala Sekolah yang didukung oleh Wakil Kepala Sekolah, Koordinator Kurikulum, Koordinator Kesiswaan, dan Koordinator Sarana Prasarana. Struktur organisasi ini memastikan pengelolaan sekolah yang efektif dan efisien.</p>
                        
                        <div class="history-image">
                            <img src="https://images.unsplash.com/photo-1591123120675-6f7f1aae0e5b?ixlib=rb-4.0.3&auto=format&fit=crop&w=800&q=80" alt="Struktur Organisasi">
                        </div>
                        
                        <p>Setiap tahun, sekolah melakukan evaluasi terhadap struktur organisasi untuk memastikan keselarasan dengan kebutuhan perkembangan sekolah dan kebijakan pendidikan terkini.</p>
                    </div>
                </div>
                
                <!-- Sidebar -->
                <div class="sidebar">
                    <!-- Kepala Sekolah -->
                    <div class="sidebar-widget">
                        <div class="principal-card">
                            <div class="principal-img">
                                <img src="https://images.unsplash.com/photo-1573496359142-b8d87734a5a2?ixlib=rb-4.0.3&auto=format&fit=crop&w=400&q=80" alt="Kepala Sekolah">
                            </div>
                            <h4>Dr. Siti Rahmah, M.Pd</h4>
                            <p>Kepala Sekolah</p>
                            <p>"Pendidikan adalah investasi terbaik untuk masa depan anak-anak kita"</p>
                        </div>
                    </div>
                    
                    <!-- Tautan Cepat -->
                    <div class="sidebar-widget">
                        <h3><i class="fas fa-link"></i> Tautan Cepat</h3>
                        <div class="quick-links">
                            <ul>
                                <li><a href="#"><i class="fas fa-download"></i> Download Brosur Sekolah</a></li>
                                <li><a href="#"><i class="fas fa-calendar-alt"></i> Kalender Akademik</a></li>
                                <li><a href="#"><i class="fas fa-book"></i> Kurikulum Sekolah</a></li>
                                <li><a href="#"><i class="fas fa-users"></i> Struktur Organisasi</a></li>
                                <li><a href="#"><i class="fas fa-chart-line"></i> Prestasi Sekolah</a></li>
                                <li><a href="#"><i class="fas fa-map-marked-alt"></i> Lokasi Sekolah</a></li>
                            </ul>
                        </div>
                    </div>
                    
                    <!-- Statistik -->
                    <div class="sidebar-widget">
                        <h3><i class="fas fa-chart-bar"></i> Statistik Sekolah</h3>
                        <div class="statistics">
                            <div class="stat-item">
                                <i class="fas fa-user-graduate"></i>
                                <div class="number">625</div>
                                <div class="label">Siswa</div>
                            </div>
                            <div class="stat-item">
                                <i class="fas fa-chalkboard-teacher"></i>
                                <div class="number">42</div>
                                <div class="label">Guru</div>
                            </div>
                            <div class="stat-item">
                                <i class="fas fa-book"></i>
                                <div class="number">18</div>
                                <div class="label">Rombel</div>
                            </div>
                            <div class="stat-item">
                                <i class="fas fa-building"></i>
                                <div class="number">24</div>
                                <div class="label">Ruang Kelas</div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- Footer -->
    <footer>
        <div class="footer-container">
            <div class="footer-col">
                <h3>SD Negeri 24 Banda Aceh</h3>
                <p>Sekolah dasar unggulan di Banda Aceh yang fokus pada pengembangan karakter, akademik, dan kreativitas siswa.</p>
                <div class="social-links">
                    <a href="#"><i class="fab fa-facebook-f"></i></a>
                    <a href="#"><i class="fab fa-instagram"></i></a>
                    <a href="#"><i class="fab fa-youtube"></i></a>
                    <a href="#"><i class="fab fa-twitter"></i></a>
                </div>
            </div>
            
            <div class="footer-col">
                <h3>Kontak Kami</h3>
                <ul class="contact-info">
                    <li>
                        <i class="fas fa-map-marker-alt"></i>
                        <span>Jl. Pendidikan No. 24, Kec. Syiah Kuala, Banda Aceh, Aceh 23116</span>
                    </li>
                    <li>
                        <i class="fas fa-phone-alt"></i>
                        <span>(0651) 1234567</span>
                    </li>
                    <li>
                        <i class="fas fa-envelope"></i>
                        <span>info@sdn24bandaaceh.sch.id</span>
                    </li>
                    <li>
                        <i class="fas fa-clock"></i>
                        <span>Senin - Jumat: 07:30 - 16:00 WIB</span>
                    </li>
                </ul>
            </div>
            
            <div class="footer-col">
                <h3>Tautan Cepat</h3>
                <ul class="footer-links">
                    <li><a href="#"><i class="fas fa-chevron-right"></i> Beranda</a></li>
                    <li><a href="#"><i class="fas fa-chevron-right"></i> Profil Sekolah</a></li>
                    <li><a href="#"><i class="fas fa-chevron-right"></i> Kurikulum</a></li>
                    <li><a href="#"><i class="fas fa-chevron-right"></i> Galeri Foto</a></li>
                    <li><a href="#"><i class="fas fa-chevron-right"></i> Berita & Pengumuman</a></li>
                    <li><a href="#"><i class="fas fa-chevron-right"></i> Perpustakaan Digital</a></li>
                </ul>
            </div>
        </div>
        
        <div class="copyright">
            <p>&copy; 2023 SD Negeri 24 Banda Aceh. Hak Cipta Dilindungi.</p>
        </div>
    </footer>

    <script>
        // Highlight current page in navigation
        const currentPage = window.location.pathname.split('/').pop();
        const navLinks = document.querySelectorAll('nav ul li a');
        
        navLinks.forEach(link => {
            if (link.getAttribute('href') === currentPage) {
                link.classList.add('active');
            } else {
                link.classList.remove('active');
            }
        });
        
        // Smooth scrolling for anchor links
        document.querySelectorAll('a[href^="#"]').forEach(anchor => {
            anchor.addEventListener('click', function(e) {
                e.preventDefault();
                const target = document.querySelector(this.getAttribute('href'));
                if (target) {
                    target.scrollIntoView({
                        behavior: 'smooth'
                    });
                }
            });
        });
    </script>
</body>
</html>